/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface WBSCredentialMatchCriteria : NSObject {

	unsigned long long _options;
	NSURL* _URL;
	NSString* _partialUsername;

}

@property (nonatomic,readonly) unsigned long long options;                   //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSURL * URL;                             //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy,readonly) NSString * partialUsername;              //@synthesize partialUsername=_partialUsername - In the implementation block
-(unsigned long long)options;
-(NSURL *)URL;
-(id)initWithURL:(id)arg1 options:(unsigned long long)arg2 partialUsername:(id)arg3 ;
-(NSString *)partialUsername;
@end

