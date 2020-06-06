/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCStoreServerEndpointFactory.h>

@class NSURL, PLAssetsdClient, NSString;

@interface PLXPCPhotoLibraryStoreEndpointFactory : NSObject <NSXPCStoreServerEndpointFactory> {

	NSURL* _libraryURL;
	PLAssetsdClient* _assetsdClient;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)newEndpoint;
-(id)initWithAssetsdClient:(id)arg1 ;
@end

