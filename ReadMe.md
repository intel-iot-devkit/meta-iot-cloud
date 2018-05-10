meta-iot-cloud
==============
OpenEmbedded layer to add support for multiple cloud service provider solutions.

## Supported Platforms
* [IBM Cloud](https://www.ibm.com/cloud/)
* [Amazon Web Services](https://aws.amazon.com/)
* [Microsoft Azure](https://azure.microsoft.com/)
* [Google Cloud Platform](https://cloud.google.com/)

Configuration
=============
1. Clone the `meta-iot-cloud` layer to your project directory and checkout the `idp_3.x` branch.
2. Include the following in your project configure command
```bitbake
    --with-layer=/path/to/meta-iot-cloud
```

Usage
=====
To build packages related to IBM Cloud:
```shell
	make packagegroup-cloud-ibm
```
	
To build packages related to Amazon Web Services:
```shell
	make packagegroup-cloud-aws
```

To build packages related to Microsoft Azure:
```shell
	make packagegroup-cloud-azure
```

To build packages related to Google Cloud Platform:
```shell
	make packagegroup-cloud-google
```

Alternatively to add support for a given platform into your image add the following to your configure command

```bitbake
    --with-package=packagegroup-cloud-aws
    --with-package=packagegroup-cloud-azure
    --with-package=packagegroup-cloud-google
    --with-package=packagegroup-cloud-ibm
```

Installation
============

Installing on Wind River IDP XT 3 (x86)
---------------------------------------

``` bash
rpm --import http://iotdk.intel.com/misc/iot_pub2.key
smart channel --add IoT_Cloud type=rpm-md name="IoT_Cloud" baseurl=http://iotdk.intel.com/repos/iot-cloud/wrlinux7/rcpl13/
smart update
```
