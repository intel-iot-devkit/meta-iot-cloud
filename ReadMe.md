meta-iot-cloud
==============
OpenEmbedded layer to add support for multiple cloud service provider solutions.

## Supported Platforms
* [IBM Cloud](https://www.ibm.com/cloud/)
* [Amazon Web Services](https://aws.amazon.com/)
* [Microsoft Azure](https://azure.microsoft.com/)
* [Google Cloud Platform](https://cloud.google.com/)

## Available Packages
* `packagegroup-cloud-ibm`
    * ibm-iotf-embeddedc
    * ibm-iotf-java
    * node-red-contrib-ibm-watson-iot
    * python-ibmiotf
* `packagegroup-cloud-aws`
    * aws-iot-device-sdk-embedded-c
    * aws-iot-device-sdk-cpp
    * aws-iot-device-sdk-java
    * python-awscli
    * python-aws-iot-device-sdk
* `packagegroup-cloud-azure`
    * azure-iot-edge
    * azure-iot-sdk
    * azure-iot-device-sdk-java
    * python-azure-iot-sdk
    * node-red-contrib-azureiothubnode
    * node-iothub-explorer
    * python-azure-cli
* `packagegroup-cloud-google`
    * google-cloud-sdk
    * python-google-cloud
* `node-red`
* `node-red-contrib-upm`

## Dependencies
This layer depends on packages provided by the following layers:
* `meta-openembedded` [http://cgit.openembedded.org/meta-openembedded/]
* `meta-java` [http://git.yoctoproject.org/cgit/cgit.cgi/meta-java/]

Configuration
=============
1. Clone the `meta-iot-cloud` layer to your project directory.
2. Add the `meta-iot-cloud` layer to `conf/bblayers.conf`
```bitbake
	BBLAYERS += "path/to/meta-iot-cloud"
```
3. Add dependency layers to `conf/bblayers.conf`
```bitbake
	BBLAYERS += "path/to/meta-openembedded/meta-oe"
	BBLAYERS += "path/to/meta-openembedded/meta-python"
	BBLAYERS += "path/to/meta-java"
```

Usage
=====
To build packages related to IBM Cloud:
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

To build packages related to Google Cloud Platform:
```shell
	bitbake packagegroup-cloud-google
```

Alternatively to add support for a given platform into your image add the following to your distro config or `conf/auto.conf`

```bitbake
    CORE_IMAGE_EXTRA_INSTALL += "packagegroup-cloud-ibm"
    CORE_IMAGE_EXTRA_INSTALL += "packagegroup-cloud-aws"
    CORE_IMAGE_EXTRA_INSTALL += "packagegroup-cloud-azure"
    CORE_IMAGE_EXTRA_INSTALL += "packagegroup-cloud-google"
```

Installation
============

Installing on Intel Developer Kit Yocto based images (Edison, Galileo)
----------------------------------------------------------------------

``` bash
echo "src iot-cloud http://iotdk.intel.com/repos/iot-cloud/iotdk/3.5" > /etc/opkg/iot-cloud.conf
opkg update
```

Installing on Wind River IDP XT 3 (x86)
---------------------------------------

``` bash
rpm --import http://iotdk.intel.com/misc/iot_pub2.key
smart channel --add IoT_Cloud type=rpm-md name="IoT_Cloud" baseurl=http://iotdk.intel.com/repos/iot-cloud/wrlinux7/rcpl13/
smart update
```

Installing on Wind River Pulsar Linux 7 (x86)
---------------------------------------------

``` bash
rpm --import http://iotdk.intel.com/misc/iot_pub2.key
smart channel --add IoT_Cloud type=rpm-md name="IoT_Cloud" baseurl=http://iotdk.intel.com/repos/iot-cloud/pulsar/7/
smart update
```

Installing on Wind River Pulsar Linux 8 (x86)
---------------------------------------------

``` bash
rpm --import http://iotdk.intel.com/misc/iot_pub2.key
smart channel --add IoT_Cloud type=rpm-md name="IoT_Cloud" baseurl=http://iotdk.intel.com/repos/iot-cloud/pulsar/8/
smart update
```
