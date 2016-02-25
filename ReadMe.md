meta-iot-cloud
==============
OpenEmbedded layer to add support for multiple cloud service provider solutions.

## Supported Platforms
* [IBM Bluemix](https://console.ng.bluemix.net/)
* [Amazon Web Services](https://aws.amazon.com/)

## Available Packages
* `packagegroup-cloud-ibm`
    * iotf-embeddedc
    * iot-nodered
    * python-ibmiotf
* `packagegroup-cloud-aws`
    * python-awscli
* `paho-mqtt-c`
* `node-red`

Installation
============
1. Clone the `meta-iot-cloud` layer to your project directory.
2. Add the `meta-iot-cloud` layer to `conf/bblayers.conf`
```bitbake
	BBLAYERS += "path/to/meta-iot-cloud"
```
## Dependencies
This layer depends on packages provided by the following layers:
* `meta-openembedded` [http://cgit.openembedded.org/meta-openembedded/]
* `meta-nodejs` [https://github.com/imyller/meta-nodejs]

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
Alternatively to add support for a given platform into your image add the following to your distro config or `conf/auto.conf`

```bitbake
    CORE_IMAGE_EXTRA_INSTALL += "packagegroup-cloud-ibm packagegroup-cloud-aws"
```
