// Particle Swarm Optimization (PSO) Algorithm Sample

#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <ctime>

// Define your fitness function
double fitnessFunction(const std::vector <double> &position)
{
    double sum = 0.0;
    for (double value : position)
    {
        sum += value * value;
    }
    return sum;
}

// Initialize particles with random positions and velocities
void initializeParticles(std::vector<std::vector<double>> &positions, std::vector<std::vector<double>> &velocities, int numParticles, int numDimensions)
{
    for (int i = 0; i < numParticles; ++i)
    {
        std::vector<double> position;
        std::vector<double> velocity;
        for (int j = 0; j < numDimensions; ++j)
        {
            position.push_back((double)rand() / RAND_MAX); // Random position between 0 and 1
            velocity.push_back((double)rand() / RAND_MAX); // Random velocity between 0 and 1
        }
        positions.push_back(position);
        velocities.push_back(velocity);
    }
}

// Update particle's velocity and position
void updateParticle(std::vector<double> &position, std::vector<double> &velocity, const std::vector<double> &personalBest, const std::vector<double> &globalBest, double inertiaWeight, double cognitiveWeight, double socialWeight)
{
    for (int i = 0; i < position.size(); ++i)
    {
        double r1 = (double)rand() / RAND_MAX;
        double r2 = (double)rand() / RAND_MAX;

        double cognitiveComponent = cognitiveWeight * r1 * (personalBest[i] - position[i]);
        double socialComponent = socialWeight * r2 * (globalBest[i] - position[i]);

        velocity[i] = inertiaWeight * velocity[i] + cognitiveComponent + socialComponent;
        position[i] = position[i] + velocity[i];
    }
}

int main()
{
    srand(static_cast<unsigned int>(time(0))); // Seed random number generator

    // Parameters
    int numParticles = 50;
    int numDimensions = 2;
    double inertiaWeight = 0.5;
    double cognitiveWeight = 1.0;
    double socialWeight = 2.0;

    // Initialize particles
    std::vector<std::vector<double>> positions;
    std::vector<std::vector<double>> velocities;
    initializeParticles(positions, velocities, numParticles, numDimensions);

    // Initialize personal best and global best
    std::vector<double> globalBest(numDimensions, 0.0);
    std::vector<std::vector<double>> personalBest(numParticles, std::vector<double>(numDimensions, 0.0));

    // PSO loop
    for (int iteration = 0; iteration < 100; ++iteration)
    {
        // Evaluate fitness and update personal best
        for (int i = 0; i < numParticles; ++i)
        {
            double fitness = fitnessFunction(positions[i]);
            if (fitnessFunction(personalBest[i]) > fitness)
            {
                personalBest[i] = positions[i];
            }
        }

        // Update global best
        for (int i = 0; i < numParticles; ++i)
        {
            if (fitnessFunction(positions[i]) < fitnessFunction(globalBest))
            {
                globalBest = positions[i];
            }
        }

        // Update particles
        for (int i = 0; i < numParticles; ++i)
        {
            updateParticle(positions[i], velocities[i], personalBest[i], globalBest, inertiaWeight, cognitiveWeight, socialWeight);
        }
    }

    // Output the best solution found
    std::cout << "Best solution found: ";
    for (double value : globalBest)
    {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}