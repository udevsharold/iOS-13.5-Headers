/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagement/RMResolvedAsset.h>

@class NSURL;

@interface RMResolvedFileAsset : RMResolvedAsset {

	NSURL* _downloadedURL;

}

@property (nonatomic,readonly) NSURL * downloadedURL;              //@synthesize downloadedURL=_downloadedURL - In the implementation block
-(id)initWithAsset:(id)arg1 downloadedURL:(id)arg2 error:(id)arg3 ;
-(NSURL *)downloadedURL;
@end

