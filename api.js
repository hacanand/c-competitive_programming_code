//URL=https://jsonmock.hackerrank.com/api/article_users?page=

// const getUsers = async (threshold) => {
//   let page = 1;
//   let users = [];
//   let totalPages = 1;
//   while (page <= totalPages) {
//     const response = await fetch(
//       `https://jsonmock.hackerrank.com/api/article_users?page=${page}`
//     );
//     const data = await response.json();
//     totalPages = data.total_pages;
//     users = users.concat(data.data);
//     page++;
//   }
//   return users.filter((user) => user.submission_count > threshold);
// };

// getUsers(10).then((users) => users.map((user) => console.log(user.username)));


//URI=https://jsonmock.hackerrank.com/api/transactions?page=${page}

const getCredit = async (userName, city) => {
    let page = 1;
    let maxDebit = -1.0;
    let maxCredit = 0.0;
    let transactions = [];
    let totalPages = 1;
    while (page <= totalPages) {
        const response = await fetch(`https://jsonmock.hackerrank.com/api/transactions?page=${page}`);
        const data = await response.json();
        totalPages = data.total_pages;
        for (let i = 0; i < data.data.length; i++) {
            if (data.data[i].userName !== userName || data.data[i].location.city !== city) {
                continue;
            }
            const transaction = data.data[i];
            originalAmount = transaction.amount;
            const stringWithoutDollar = originalAmount.slice(1);
            const amount = parseFloat(stringWithoutDollar.replace(/,/g, ''));
            if(transaction.transactionType === 'credit') {
              maxDebit=Math.max(maxDebit,amount);
            }
            else{
              maxCredit=Math.max(maxCredit,amount);
            }   
        }
        page++;
        
    }
    transactions.push(maxDebit);
    transactions.push(maxCredit);
    return transactions;
    
}
getCredit("John Oliver", "Ripley").then((transactions) =>
  console.log(transactions)
);