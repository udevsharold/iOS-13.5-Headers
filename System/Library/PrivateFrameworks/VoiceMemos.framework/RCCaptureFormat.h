/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface RCCaptureFormat : NSObject
+(id)fileExtensionForIntermediateAssetCapture;
+(id)fileFormatsDirectlyImportable;
+(id)fileExtensionForAssetExport;
+(void)AVAssetExportDetermineSettingsForExportingAsset:(id)arg1 preferredOutputExtension:(id)arg2 preferredFormat:(unsigned)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)AVAssetAuthoringMetadataWithCreationDate:(id)arg1 title:(id)arg2 uniqueID:(id)arg3 ;
+(id)fileExtensionsSupported;
+(void)_AVAssetExportDetermineSettingsForExportingAsset:(id)arg1 outputExtensionWithFallbacks:(id)arg2 preferredFormat:(unsigned)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)AVFileTypeUTIForFileExtension:(id)arg1 ;
+(id)AVAssetExportPresetForExportingToExtension:(id)arg1 preferredFormat:(unsigned)arg2 ;
+(id)AVMediaTypeForFileExtension:(id)arg1 ;
@end

