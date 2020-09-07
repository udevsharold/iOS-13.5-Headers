/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NNMKDirectoryProvider.h>
@class NSString;


@protocol NNMKDirectoryProvider <NSObject>
@property (nonatomic,retain) NSString * pairedDeviceRegistryPath; 
@required
-(NSString *)pairedDeviceRegistryPath;
-(void)setPairedDeviceRegistryPath:(id)arg1;

@end


@class NSString;

@interface NNMKDirectoryProvider : NSObject <NNMKDirectoryProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * pairedDeviceRegistryPath; 
+(void)removePairedDeviceRegistryPathFromUserDefaults;
-(NSString *)pairedDeviceRegistryPath;
-(void)setPairedDeviceRegistryPath:(NSString *)arg1 ;
@end
