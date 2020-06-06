/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FMStopwatch : NSObject {

	NSString* _label;
	NSString* _comment;
	unsigned long long _startTime;
	unsigned long long _endTime;

}

@property (nonatomic,copy) NSString * label;                            //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * comment;                          //@synthesize comment=_comment - In the implementation block
@property (assign,nonatomic) unsigned long long startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) unsigned long long endTime;                //@synthesize endTime=_endTime - In the implementation block
+(void)initialize;
+(void)dumpBuffer:(id)arg1 ;
+(void)eventWithLabel:(id)arg1 comment:(id)arg2 ;
+(id)illegalLabelCharacterSet;
+(id)stopwatchWithLabel:(id)arg1 ;
+(void)eventWithLabel:(id)arg1 ;
-(id)description;
-(void)stop;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(id)initWithLabel:(id)arg1 ;
-(unsigned long long)startTime;
-(unsigned long long)endTime;
-(void)setEndTime:(unsigned long long)arg1 ;
-(NSString *)comment;
-(void)setStartTime:(unsigned long long)arg1 ;
-(void)setComment:(NSString *)arg1 ;
-(id)descriptionAsData;
-(void)stopWithComment:(id)arg1 ;
@end

