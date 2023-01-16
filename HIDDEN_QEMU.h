#ifndef QEMU_HIDDEN_QEMU_PATCH_H
#define QEMU_HIDDEN_QEMU_PATCH_H

/* Replace to your CPU vendor
- "AuthenticAMD"
- "GenuineIntel"
*/
/* "KVMKVMKVM" */
#define QEMU_HIDDEN_CPU_VENDOR "AuthenticAMD"
/* "KVMKVMKVM\0\0\0" */
#define QEMU_HIDDEN_CPU_SIGNATURE "AuthenticAMD"

/* "QEMU HARDDISK" */
#define QEMU_HIDDEN_HARDDISK_IDE "Generic IDE Hard Disk"

/* "QEMU MICRODRIVE" */
#define QEMU_HIDDEN_MICRODRIVE_IDE "Generic IDE MicroDrive"

/* "QEMU DVD-ROM" */
#define QEMU_HIDDEN_DVD_IDE "Generic IDE CD-ROM"

/* "QEMU DVD-ROM" */
#define QEMU_HIDDEN_ATAPI "Generic ATAPI CD-ROM"

/* "QEMU" */
#define QEMU_HIDDEN_VENDOR_ATAPI "GENERIC"

#define QEMU_HIDDEN_HARDDISK_SCSI "Generic SCSI Hard Disk"
#define QEMU_HIDDEN_DVD_SCSI "Generic SCSI CD-ROM"

/* "QEMU PenPartner tablet" */
#define QEMU_HIDDEN_PenPartner "PenPartner Tablet"

/* "QEMU" */
#define QEMU_HIDDEN_SCSI_VENDOR "GENERIC"

/* "virtual SCSI CD-ROM" */
#define QEMU_HIDDEN_SCSI_DESC "SCSI CD-ROM"

/* "QEMU CD-ROM     " */
#define HIDDEN_QEMU_CDROM_SIGNATURE "CD-ROM          "

/* "QEMU CD-ROM" */
#define QEMU_HIDDEN_SCSI_CDROM "Generic CD-ROM"

/* "Bochs Virtual HD Image" */
#define QEMU_HIDDEN_BOCHS_MAGIC "Generic Virtual HD Image"

/* "bochs" */
#define QEMU_HIDDEN_BOCHS_SIGNATURE "GENERIC"

/* "BOCHS " */
#define QEMU_HIDDEN_BOCHS_ACPI_APPNAME6 "ALASKA"

/* "BXPC    " */
#define QEMU_HIDDEN_BOCHS_ACPI_APPNAME8 "GNRC    "

#endif /* QEMU_HIDDEN_QEMU_PATCH_H */
