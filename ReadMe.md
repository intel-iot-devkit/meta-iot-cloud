meta-iot-cloud
==============
OpenEmbedded layer to add support for multiple cloud service provider solutions.

## Supported Platforms
* [IBM Bluemix](https://console.ng.bluemix.net/)
* [Amazon Web Services](https://aws.amazon.com/)
* [Microsoft Azure](https://azure.microsoft.com/)

## Available Packages
* `packagegroup-cloud-ibm`
    * ibm-iotf-embeddedc
    * ibm-iotf-java
    * node-ibmiotf
    * node-red-contrib-ibm-watson-iot
    * python-ibmiotf
* `packagegroup-cloud-aws`
    * aws-iot-device-sdk-embedded-c
    * aws-iot-device-sdk-java
    * node-aws-iot-device-sdk-js
    * python-awscli
    * python-aws-iot-device-sdk
* `packagegroup-cloud-azure`
    * azure-iot-gateway-sdk
    * azure-iot-sdk
    * python-azure-iot-sdk
    * node-azure-iot-device
    * node-red-contrib-azureiothubnode
    * node-iothub-explorer
    * iothub-java-device-client
* `node-red`
* `node-red-contrib-upm`

## Dependencies
This layer depends on packages provided by the following layers:
* `meta-openembedded` [http://cgit.openembedded.org/meta-openembedded/]

Installation
============
1. Clone the `meta-iot-cloud` layer to your project directory.
2. Add the `meta-iot-cloud` layer to `conf/bblayers.conf`
```bitbake
	BBLAYERS += "path/to/meta-iot-cloud"
```
3. Add dependency layers to `conf/bblayers.conf`
```bitbake
	BBLAYERS += "path/to/meta-openembedded/meta-oe"
	BBLAYERS += "path/to/meta-openembedded/meta-python"
```

Usage
=====
To build packages related to IBM Bluemix:
```shell
	bitbake packagegroup-cloud-ibm
```
	
To build packages related to Amazon Web Services:
```shell
	bitbake packagegroup-cloud-aws
```

To build packages related to Microsoft Azure:
```shell
	bitbake packagegroup-cloud-azure
```
Alternatively to add support for a given platform into your image add the following to your distro config or `conf/auto.conf`

```bitbake
    CORE_IMAGE_EXTRA_INSTALL += "packagegroup-cloud-ibm packagegroup-cloud-aws packagegroup-cloud-azure"
```
