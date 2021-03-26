// Handleable program.

const { exec } = require("child_process");
const { argv } = require("process");

exec(argv.slice(2).join(" "), (err, stdout, stderr) => {
  console.log(argv.slice(2).join(" "));
  if (err) throw err;
  if (stdout) console.log(stdout);
  if (stderr) console.log(stderr);
});
