(function () {
    'use strict';

    angular
        .module('app')          //servicio para las citas
        .factory('LedService', LedService);

    LedService.$inject = ['$http', '$rootScope']; //Sirve para todo lo concerniente a citas ver y crear
    function LedService($http, $rootScope) {
        var service = {};
        service.SendMessage =SendMessage;

        function SendMessage(data){
            var response= $http({
                method:"post",
                url: "http://192.168.100.10:3000/tasks",
                data: data
            });
            return response;
        }
        
        return service;

    }
})();
