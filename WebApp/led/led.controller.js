angular.module('app')
    .controller('LedController', [ 'LedService','FlashService', function (LedService, FlashService) {
        var vm = this;



        vm.sendMessage = sendMessage;


        function sendMessage(){

            var send = {mensaje: vm.input}
            LedService.SendMessage(send)
                .then(function(response){

                if (response.data == 1 ){
                    FlashService.Success("Se ha enviado el mensaje");
                    vm.input =" "    
                }
                else{
                    FlashService.Error("No se ha podido enviar el mensaje");       
                }

            },
                      function(respose){
                FlashService.Error("No se ha podido enviar el mensaje");

            });
        }

    }]);