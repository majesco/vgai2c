var express = require('express');
var app = express();
var port = process.env.PORT || 3000;
var bodyParser = require('body-parser');
var cors = require('cors');
var fileSave = require('file-save');


app.use(bodyParser.urlencoded({ extended: true })); //Utiliza bodyParser para manejar los json de 
app.use(bodyParser.json());                         //entrada y salida en el api
app.use(cors());


// This responds with "Hello World" on the homepage
app.get('/getter', function (req, res) {        //Probar el API
   console.log("Got a GET request for the homepage");
   res.send(req.body);
})


// This responds a POST request for the homepage
app.post('/send', function (req, res) {
   console.log("Got a POST request for the homepage");
   
   if (req.body.hasOwnProperty('mensaje')){  //Prueba que exista la llave mensaje (deberia de tenerlo)
                                             //Una validacion
      var mensaje = JSON.stringify(req.body);
      fileSave('../bin/texto.json')              //Guarda el json dentro de un archivo en el mismo directorio
      .write( mensaje+"\n",'utf8');       // como utf8
      res.send("1");          //Funciono
   }
   else{
      res.send("0");       //no funciono
   }

})


app.listen(port, "192.168.0.111");  //Este ip debe ser el mismo de la computadora donde se ejecuta.
                                     //Se debe cambiar si el ip es dinamico

console.log('todo list RESTful API server started on: ' + port);
