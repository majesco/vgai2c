angular.module('app')
    .controller('LedController', [ 'LedService','FlashService', function (LedService, FlashService) {
        var vm = this;



        vm.sendMessage = sendMessage;


        function sendMessage(){

            var send2 = {name: vm.input}


            var send = {mensaje: vm.input}
            LedService.SendMessage(send2)
                .then(function(response){

                FlashService.Success("Se ha enviado el mensaje");
                vm.input =" "

            },
                      function(respose){
                FlashService.Error("No se ha podido enviar el mensaje");

            });
        }

    }]);