var express = require('express');
var app = express();
var port = process.env.PORT || 3000;
var bodyParser = require('body-parser');
var cors = require('cors');
var fileSave = require('file-save');


app.use(bodyParser.urlencoded({ extended: true }));
app.use(bodyParser.json());
app.use(cors());


// This responds with "Hello World" on the homepage
app.get('/getter', function (req, res) {
   console.log("Got a GET request for the homepage");
   res.send(req.body);
})


// This responds a POST request for the homepage
app.post('/send', function (req, res) {
   console.log("Got a POST request for the homepage");
   
   if (req.body.hasOwnProperty('mensaje')){

      var mensaje = JSON.stringify(req.body);
      fileSave('texto.txt')
      .write( mensaje+"\n",'utf8');
      res.send("1");
   }
   else{
      res.send("0");
   }

})


app.listen(port, "192.168.100.10");

console.log('todo list RESTful API server started on: ' + port);
