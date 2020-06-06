/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSURLSessionTask.h>

@class NSURL;

@interface NSURLSessionAVAssetDownloadTask : NSURLSessionTask {

	unsigned long long _AVAssetDownloadToken;

}

@property (readonly) unsigned long long AVAssetDownloadToken;              //@synthesize AVAssetDownloadToken=_AVAssetDownloadToken - In the implementation block
@property (copy,readonly) NSURL * URL; 
@property (copy,readonly) NSURL * destinationURL; 
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(void)setDestinationURL:(NSURL *)arg1 ;
-(NSURL *)destinationURL;
-(unsigned long long)AVAssetDownloadToken;
@end

