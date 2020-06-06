/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WatchReplies.framework/WatchReplies
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WRCannedReply : NSObject {

	NSString* _text;
	NSString* _defaultReplyText;
	NSString* _defaultReplyKey;

}

@property (nonatomic,retain) NSString * defaultReplyText;              //@synthesize defaultReplyText=_defaultReplyText - In the implementation block
@property (nonatomic,retain) NSString * defaultReplyKey;               //@synthesize defaultReplyKey=_defaultReplyKey - In the implementation block
@property (nonatomic,copy) NSString * text;                            //@synthesize text=_text - In the implementation block
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSString *)defaultReplyText;
-(void)setDefaultReplyText:(NSString *)arg1 ;
-(NSString *)defaultReplyKey;
-(void)setDefaultReplyKey:(NSString *)arg1 ;
@end

