/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableSet;

@interface _MSCountableMatchesContext : NSObject {

	NSMutableDictionary* _contactsCount;
	long long _maxCount;
	NSMutableSet* _highestMatches;

}

@property (assign,nonatomic) long long maxCount;                           //@synthesize maxCount=_maxCount - In the implementation block
@property (nonatomic,readonly) NSMutableSet * highestMatches;              //@synthesize highestMatches=_highestMatches - In the implementation block
-(id)init;
-(void)setMaxCount:(long long)arg1 ;
-(long long)maxCount;
-(void)countInstances:(id)arg1 usingPredicate:(/*^block*/id)arg2 ;
-(NSMutableSet *)highestMatches;
@end

