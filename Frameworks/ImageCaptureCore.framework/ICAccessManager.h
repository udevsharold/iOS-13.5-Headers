/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ICAccessManager : NSObject
+(id)bundleIdentifiersAccessingExternalMediaDevices;
+(void)revokeBundleIdentifierAccessingExternalMediaDevices:(id)arg1 ;
+(void)updateBundleIdentifierAccessingExternalMediaDevices:(id)arg1 withStatus:(BOOL)arg2 ;
+(id)bundleIdentifiersAccessingExternalMediaDevicesWithStatus;
+(void)addBundleIdentifierAccessingExternalMediaDevices:(id)arg1 ;
+(BOOL)validateBundleIdentifierAccessingExternalMediaDevices:(id)arg1 ;
@end

