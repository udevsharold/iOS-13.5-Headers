/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ENNoteContent : NSObject {

	NSString* _emml;

}

@property (nonatomic,copy) NSString * emml;              //@synthesize emml=_emml - In the implementation block
+(id)noteContentWithString:(id)arg1 ;
+(id)noteContentWithContentArray:(id)arg1 ;
+(id)noteContentWithSanitizedHTML:(id)arg1 ;
+(id)noteContentWithENML:(id)arg1 ;
-(id)enmlWithNote:(id)arg1 ;
-(id)initWithENML:(id)arg1 ;
-(id)enml;
-(NSString *)emml;
-(void)setEmml:(NSString *)arg1 ;
@end

