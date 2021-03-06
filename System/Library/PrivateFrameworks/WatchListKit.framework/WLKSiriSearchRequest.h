/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKRequest.h>

@class NSDictionary;

@interface WLKSiriSearchRequest : WLKRequest {

	NSDictionary* _query;

}

@property (nonatomic,copy,readonly) NSDictionary * query;              //@synthesize query=_query - In the implementation block
-(NSDictionary *)query;
-(id)initWithQuery:(id)arg1 ;
-(void)makeRequestWithCompletion:(/*^block*/id)arg1 ;
@end

