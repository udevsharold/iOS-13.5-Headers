/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFFeedback.h>

@class NSString;

@interface SFEndSearchFeedback : SFFeedback {

	BOOL _isCanceled;
	NSString* _uuid;
	unsigned long long _cancelSearchEvent;

}

@property (nonatomic,copy) NSString * uuid;                                     //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) BOOL isCanceled;                                   //@synthesize isCanceled=_isCanceled - In the implementation block
@property (assign,nonatomic) unsigned long long cancelSearchEvent;              //@synthesize cancelSearchEvent=_cancelSearchEvent - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(BOOL)isCanceled;
-(void)setIsCanceled:(BOOL)arg1 ;
-(id)initWithStartSearch:(id)arg1 ;
-(unsigned long long)cancelSearchEvent;
-(void)setCancelSearchEvent:(unsigned long long)arg1 ;
@end

