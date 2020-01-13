meta-iot-cloud
==============
OpenEmbedded layer to add support for multiple cloud service provider solutions.

## Supported Platforms
* [IBM Cloud](https://www.ibm.com/cloud/)
* [Amazon Web Services](https://aws.amazon.com/)
* [Microsoft Azure](https://azure.microsoft.com/)
* [Google Cloud Platform](https://cloud.google.com/)

## Dependencies
This layer depends on packages provided by the following layers:
* `meta-openembedded` [http://cgit.openembedded.org/meta-openembedded/]

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
        BBLAYERS += "path/to/meta-openembedded/meta-networking"
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
