/******************************************************************************
 *
 * Name: acresrc.h - Resource Manager function prototypes
 *       $Revision: 1.39 $
 *
 *****************************************************************************/

/******************************************************************************
 *
 * 1. Copyright Notice
 *
 * Some or all of this work - Copyright (c) 1999 - 2005, Intel Corp.
 * All rights reserved.
 *
 * 2. License
 *
 * 2.1. This is your license from Intel Corp. under its intellectual property
 * rights.  You may have additional license terms from the party that provided
 * you this software, covering your right to use that party's intellectual
 * property rights.
 *
 * 2.2. Intel grants, free of charge, to any person ("Licensee") obtaining a
 * copy of the source code appearing in this file ("Covered Code") an
 * irrevocable, perpetual, worldwide license under Intel's copyrights in the
 * base code distributed originally by Intel ("Original Intel Code") to copy,

 * make derivatives, distribute, use and display any portion of the Covered
 * Code in any form, with the right to sublicense such rights; and
 *
 * 2.3. Intel grants Licensee a non-exclusive and non-transferable patent
 * license (with the right to sublicense), under only those claims of Intel
 * patents that are infringed by the Original Intel Code, to make, use, sell,
 * offer to sell, and import the Covered Code and derivative works thereof
 * solely to the minimum extent necessary to exercise the above copyright
 * license, and in no event shall the patent license extend to any additions
 * to or modifications of the Original Intel Code.  No other license or right
 * is granted directly or by implication, estoppel or otherwise;
 *
 * The above copyright and patent license is granted only if the following
 * conditions are met:
 *
 * 3. Conditions
 *
 * 3.1. Redistribution of Source with Rights to Further Distribute Source.
 * Redistribution of source code of any substantial portion of the Covered
 * Code or modification with rights to further distribute source must include
 * the above Copyright Notice, the above License, this list of Conditions,
 * and the following Disclaimer and Export Compliance provision.  In addition,
 * Licensee must cause all Covered Code to which Licensee contributes to
 * contain a file documenting the changes Licensee made to create that Covered
 * Code and the date of any change.  Licensee must include in that file the
 * documentation of any changes made by any predecessor Licensee.  Licensee
 * must include a prominent statement that the modification is derived,
 * directly or indirectly, from Original Intel Code.
 *
 * 3.2. Redistribution of Source with no Rights to Further Distribute Source.
 * Redistribution of source code of any substantial portion of the Covered
 * Code or modification without rights to further distribute source must
 * include the following Disclaimer and Export Compliance provision in the
 * documentation and/or other materials provided with distribution.  In
 * addition, Licensee may not authorize further sublicense of source of any
 * portion of the Covered Code, and must include terms to the effect that the
 * license from Licensee to its licensee is limited to the intellectual
 * property embodied in the software Licensee provides to its licensee, and
 * not to intellectual property embodied in modifications its licensee may
 * make.
 *
 * 3.3. Redistribution of Executable. Redistribution in executable form of any
 * substantial portion of the Covered Code or modification must reproduce the
 * above Copyright Notice, and the following Disclaimer and Export Compliance
 * provision in the documentation and/or other materials provided with the
 * distribution.
 *
 * 3.4. Intel retains all right, title, and interest in and to the Original
 * Intel Code.
 *
 * 3.5. Neither the name Intel nor any other trademark owned or controlled by
 * Intel shall be used in advertising or otherwise to promote the sale, use or
 * other dealings in products derived from or relating to the Covered Code
 * without prior written authorization from Intel.
 *
 * 4. Disclaimer and Export Compliance
 *
 * 4.1. INTEL MAKES NO WARRANTY OF ANY KIND REGARDING ANY SOFTWARE PROVIDED
 * HERE.  ANY SOFTWARE ORIGINATING FROM INTEL OR DERIVED FROM INTEL SOFTWARE
 * IS PROVIDED "AS IS," AND INTEL WILL NOT PROVIDE ANY SUPPORT,  ASSISTANCE,
 * INSTALLATION, TRAINING OR OTHER SERVICES.  INTEL WILL NOT PROVIDE ANY
 * UPDATES, ENHANCEMENTS OR EXTENSIONS.  INTEL SPECIFICALLY DISCLAIMS ANY
 * IMPLIED WARRANTIES OF MERCHANTABILITY, NONINFRINGEMENT AND FITNESS FOR A
 * PARTICULAR PURPOSE.
 *
 * 4.2. IN NO EVENT SHALL INTEL HAVE ANY LIABILITY TO LICENSEE, ITS LICENSEES
 * OR ANY OTHER THIRD PARTY, FOR ANY LOST PROFITS, LOST DATA, LOSS OF USE OR
 * COSTS OF PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES, OR FOR ANY INDIRECT,
 * SPECIAL OR CONSEQUENTIAL DAMAGES ARISING OUT OF THIS AGREEMENT, UNDER ANY
 * CAUSE OF ACTION OR THEORY OF LIABILITY, AND IRRESPECTIVE OF WHETHER INTEL
 * HAS ADVANCE NOTICE OF THE POSSIBILITY OF SUCH DAMAGES.  THESE LIMITATIONS
 * SHALL APPLY NOTWITHSTANDING THE FAILURE OF THE ESSENTIAL PURPOSE OF ANY
 * LIMITED REMEDY.
 *
 * 4.3. Licensee shall not export, either directly or indirectly, any of this
 * software or system incorporating such software without first obtaining any
 * required license or other approval from the U. S. Department of Commerce or
 * any other agency or department of the United States Government.  In the
 * event Licensee exports any such software from the United States or
 * re-exports any such software from a foreign destination, Licensee shall
 * ensure that the distribution and export/re-export of the software is in
 * compliance with all laws, regulations, orders, or other restrictions of the
 * U.S. Export Administration Regulations. Licensee agrees that neither it nor
 * any of its subsidiaries will export/re-export any technical data, process,
 * software, or service, directly or indirectly, to any country for which the
 * United States government or any agency thereof requires an export license,
 * other governmental approval, or letter of assurance, without first obtaining
 * such license, approval or letter.
 *
 *****************************************************************************/

#ifndef __ACRESRC_H__
#define __ACRESRC_H__


/*
 *  Function prototypes called from Acpi* APIs
 */

ACPI_STATUS
AcpiRsGetPrtMethodData (
    ACPI_HANDLE             Handle,
    ACPI_BUFFER             *RetBuffer);


ACPI_STATUS
AcpiRsGetCrsMethodData (
    ACPI_HANDLE             Handle,
    ACPI_BUFFER             *RetBuffer);

ACPI_STATUS
AcpiRsGetPrsMethodData (
    ACPI_HANDLE             Handle,
    ACPI_BUFFER             *RetBuffer);

ACPI_STATUS
AcpiRsGetMethodData (
    ACPI_HANDLE             Handle,
    char                    *Path,
    ACPI_BUFFER             *RetBuffer);

ACPI_STATUS
AcpiRsSetSrsMethodData (
    ACPI_HANDLE             Handle,
    ACPI_BUFFER             *RetBuffer);

ACPI_STATUS
AcpiRsCreateResourceList (
    ACPI_OPERAND_OBJECT     *ByteStreamBuffer,
    ACPI_BUFFER             *OutputBuffer);

ACPI_STATUS
AcpiRsCreateByteStream (
    ACPI_RESOURCE           *LinkedListBuffer,
    ACPI_BUFFER             *OutputBuffer);

ACPI_STATUS
AcpiRsCreatePciRoutingTable (
    ACPI_OPERAND_OBJECT     *PackageObject,
    ACPI_BUFFER             *OutputBuffer);


/*
 * Function prototypes called from AcpiRsCreate*
 */
void
AcpiRsDumpIrq (
    ACPI_RESOURCE_DATA      *Data);

void
AcpiRsDumpAddress16 (
    ACPI_RESOURCE_DATA      *Data);

void
AcpiRsDumpAddress32 (
    ACPI_RESOURCE_DATA      *Data);

void
AcpiRsDumpAddress64 (
    ACPI_RESOURCE_DATA      *Data);

void
AcpiRsDumpDma (
    ACPI_RESOURCE_DATA      *Data);

void
AcpiRsDumpIo (
    ACPI_RESOURCE_DATA      *Data);

void
AcpiRsDumpExtendedIrq (
    ACPI_RESOURCE_DATA      *Data);

void
AcpiRsDumpFixedIo (
    ACPI_RESOURCE_DATA      *Data);

void
AcpiRsDumpFixedMemory32 (
    ACPI_RESOURCE_DATA      *Data);

void
AcpiRsDumpMemory24 (
    ACPI_RESOURCE_DATA      *Data);

void
AcpiRsDumpMemory32 (
    ACPI_RESOURCE_DATA      *Data);

void
AcpiRsDumpStartDependFns (
    ACPI_RESOURCE_DATA      *Data);

void
AcpiRsDumpVendorSpecific (
    ACPI_RESOURCE_DATA      *Data);

void
AcpiRsDumpResourceList (
    ACPI_RESOURCE           *Resource);

void
AcpiRsDumpIrqList (
    UINT8                   *RouteTable);

ACPI_STATUS
AcpiRsGetByteStreamStart (
    UINT8                   *ByteStreamBuffer,
    UINT8                   **ByteStreamStart,
    UINT32                  *Size);

ACPI_STATUS
AcpiRsGetListLength (
    UINT8                   *ByteStreamBuffer,
    UINT32                  ByteStreamBufferLength,
    ACPI_SIZE               *SizeNeeded);

ACPI_STATUS
AcpiRsGetByteStreamLength (
    ACPI_RESOURCE           *LinkedListBuffer,
    ACPI_SIZE               *SizeNeeded);

ACPI_STATUS
AcpiRsGetPciRoutingTableLength (
    ACPI_OPERAND_OBJECT     *PackageObject,
    ACPI_SIZE               *BufferSizeNeeded);

ACPI_STATUS
AcpiRsByteStreamToList (
    UINT8                   *ByteStreamBuffer,
    UINT32                  ByteStreamBufferLength,
    UINT8                   *OutputBuffer);

ACPI_STATUS
AcpiRsListToByteStream (
    ACPI_RESOURCE           *LinkedList,
    ACPI_SIZE               ByteStreamSizeNeeded,
    UINT8                   *OutputBuffer);

ACPI_STATUS
AcpiRsIoResource (
    UINT8                   *ByteStreamBuffer,
    ACPI_SIZE               *BytesConsumed,
    UINT8                   **OutputBuffer,
    ACPI_SIZE               *StructureSize);

ACPI_STATUS
AcpiRsFixedIoResource (
    UINT8                   *ByteStreamBuffer,
    ACPI_SIZE               *BytesConsumed,
    UINT8                   **OutputBuffer,
    ACPI_SIZE               *StructureSize);

ACPI_STATUS
AcpiRsIoStream (
    ACPI_RESOURCE           *LinkedList,
    UINT8                   **OutputBuffer,
    ACPI_SIZE               *BytesConsumed);

ACPI_STATUS
AcpiRsFixedIoStream (
    ACPI_RESOURCE           *LinkedList,
    UINT8                   **OutputBuffer,
    ACPI_SIZE               *BytesConsumed);

ACPI_STATUS
AcpiRsIrqResource (
    UINT8                   *ByteStreamBuffer,
    ACPI_SIZE               *BytesConsumed,
    UINT8                   **OutputBuffer,
    ACPI_SIZE               *StructureSize);

ACPI_STATUS
AcpiRsIrqStream (
    ACPI_RESOURCE           *LinkedList,
    UINT8                   **OutputBuffer,
    ACPI_SIZE               *BytesConsumed);

ACPI_STATUS
AcpiRsDmaResource (
    UINT8                   *ByteStreamBuffer,
    ACPI_SIZE               *BytesConsumed,
    UINT8                   **OutputBuffer,
    ACPI_SIZE               *StructureSize);

ACPI_STATUS
AcpiRsDmaStream (
    ACPI_RESOURCE           *LinkedList,
    UINT8                   **OutputBuffer,
    ACPI_SIZE               *BytesConsumed);

ACPI_STATUS
AcpiRsAddress16Resource (
    UINT8                   *ByteStreamBuffer,
    ACPI_SIZE               *BytesConsumed,
    UINT8                   **OutputBuffer,
    ACPI_SIZE               *StructureSize);

ACPI_STATUS
AcpiRsAddress16Stream (
    ACPI_RESOURCE           *LinkedList,
    UINT8                   **OutputBuffer,
    ACPI_SIZE               *BytesConsumed);

ACPI_STATUS
AcpiRsAddress32Resource (
    UINT8                   *ByteStreamBuffer,
    ACPI_SIZE               *BytesConsumed,
    UINT8                   **OutputBuffer,
    ACPI_SIZE               *StructureSize);

ACPI_STATUS
AcpiRsAddress32Stream (
    ACPI_RESOURCE           *LinkedList,
    UINT8                   **OutputBuffer,
    ACPI_SIZE               *BytesConsumed);

ACPI_STATUS
AcpiRsAddress64Resource (
    UINT8                   *ByteStreamBuffer,
    ACPI_SIZE               *BytesConsumed,
    UINT8                   **OutputBuffer,
    ACPI_SIZE               *StructureSize);

ACPI_STATUS
AcpiRsAddress64Stream (
    ACPI_RESOURCE           *LinkedList,
    UINT8                   **OutputBuffer,
    ACPI_SIZE               *BytesConsumed);

ACPI_STATUS
AcpiRsStartDependFnsResource (
    UINT8                   *ByteStreamBuffer,
    ACPI_SIZE               *BytesConsumed,
    UINT8                   **OutputBuffer,
    ACPI_SIZE               *StructureSize);

ACPI_STATUS
AcpiRsEndDependFnsResource (
    UINT8                   *ByteStreamBuffer,
    ACPI_SIZE               *BytesConsumed,
    UINT8                   **OutputBuffer,
    ACPI_SIZE               *StructureSize);

ACPI_STATUS
AcpiRsStartDependFnsStream (
    ACPI_RESOURCE           *LinkedList,
    UINT8                   **OutputBuffer,
    ACPI_SIZE               *BytesConsumed);

ACPI_STATUS
AcpiRsEndDependFnsStream (
    ACPI_RESOURCE           *LinkedList,
    UINT8                   **OutputBuffer,
    ACPI_SIZE               *BytesConsumed);

ACPI_STATUS
AcpiRsMemory24Resource (
    UINT8                   *ByteStreamBuffer,
    ACPI_SIZE               *BytesConsumed,
    UINT8                   **OutputBuffer,
    ACPI_SIZE               *StructureSize);

ACPI_STATUS
AcpiRsMemory24Stream (
    ACPI_RESOURCE           *LinkedList,
    UINT8                   **OutputBuffer,
    ACPI_SIZE               *BytesConsumed);

ACPI_STATUS
AcpiRsMemory32RangeResource (
    UINT8                   *ByteStreamBuffer,
    ACPI_SIZE               *BytesConsumed,
    UINT8                   **OutputBuffer,
    ACPI_SIZE               *StructureSize);

ACPI_STATUS
AcpiRsFixedMemory32Resource (
    UINT8                   *ByteStreamBuffer,
    ACPI_SIZE               *BytesConsumed,
    UINT8                   **OutputBuffer,
    ACPI_SIZE               *StructureSize);

ACPI_STATUS
AcpiRsMemory32RangeStream (
    ACPI_RESOURCE           *LinkedList,
    UINT8                   **OutputBuffer,
    ACPI_SIZE               *BytesConsumed);

ACPI_STATUS
AcpiRsFixedMemory32Stream (
    ACPI_RESOURCE           *LinkedList,
    UINT8                   **OutputBuffer,
    ACPI_SIZE               *BytesConsumed);

ACPI_STATUS
AcpiRsExtendedIrqResource (
    UINT8                   *ByteStreamBuffer,
    ACPI_SIZE               *BytesConsumed,
    UINT8                   **OutputBuffer,
    ACPI_SIZE               *StructureSize);

ACPI_STATUS
AcpiRsExtendedIrqStream (
    ACPI_RESOURCE           *LinkedList,
    UINT8                   **OutputBuffer,
    ACPI_SIZE               *BytesConsumed);

ACPI_STATUS
AcpiRsEndTagResource (
    UINT8                   *ByteStreamBuffer,
    ACPI_SIZE               *BytesConsumed,
    UINT8                   **OutputBuffer,
    ACPI_SIZE               *StructureSize);

ACPI_STATUS
AcpiRsEndTagStream (
    ACPI_RESOURCE           *LinkedList,
    UINT8                   **OutputBuffer,
    ACPI_SIZE               *BytesConsumed);

ACPI_STATUS
AcpiRsVendorResource (
    UINT8                   *ByteStreamBuffer,
    ACPI_SIZE               *BytesConsumed,
    UINT8                   **OutputBuffer,
    ACPI_SIZE               *StructureSize);

ACPI_STATUS
AcpiRsVendorStream (
    ACPI_RESOURCE           *LinkedList,
    UINT8                   **OutputBuffer,
    ACPI_SIZE               *BytesConsumed);

UINT8
AcpiRsGetResourceType (
    UINT8                   ResourceStartByte);

#endif  /* __ACRESRC_H__ */
