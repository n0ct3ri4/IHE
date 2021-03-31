// Handleable program.

const { exec } = require("child_process");

exec(process.argv.slice(2).join(" "), (err, stdout, stderr) => {
  console.log(process.argv.slice(2).join(" "));
  if (err) throw err;
  if (stdout) console.log(stdout);
  if (stderr) console.log(stderr);
});
