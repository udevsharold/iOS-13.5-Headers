/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSDictionary, WLKSiriSearchResponse;

@interface WLKSiriSearchRequestOperation : WLKUTSNetworkRequestOperation {

	NSDictionary* _query;
	WLKSiriSearchResponse* _response;

}

@property (nonatomic,copy,readonly) NSDictionary * query;                     //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) WLKSiriSearchResponse * response;              //@synthesize response=_response - In the implementation block
-(NSDictionary *)query;
-(WLKSiriSearchResponse *)response;
-(void)processResponse;
-(id)initWithQuery:(id)arg1 caller:(id)arg2 ;
@end

