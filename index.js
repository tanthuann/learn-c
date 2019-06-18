var fs = require('fs');

let readFileX = (filename) => {
	return Promise((resolve,reject) => {
		fs.readFile(filename,'UTF8',(err,data) => {
			if(err) return reject(new Error('err'));
			resolve(data);
		});
	});
}

var content;

var aAsync = async () => {
	content = await readFileX('./package-lock.json');
	console.log(content);
}

aAsync();
console.log(content);