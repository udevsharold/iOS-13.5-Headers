/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface PHImportTimer : NSObject {

	unsigned char _type;
	unsigned char _subtype;
	id _uuid;
	NSDate* _startTime;
	NSDate* _endTime;
	unsigned long long _signpostId;

}

@property (retain) id uuid;                                    //@synthesize uuid=_uuid - In the implementation block
@property (retain) NSDate * startTime;                         //@synthesize startTime=_startTime - In the implementation block
@property (retain) NSDate * endTime;                           //@synthesize endTime=_endTime - In the implementation block
@property (assign) unsigned char type;                         //@synthesize type=_type - In the implementation block
@property (assign) unsigned char subtype;                      //@synthesize subtype=_subtype - In the implementation block
@property (assign) unsigned long long signpostId;              //@synthesize signpostId=_signpostId - In the implementation block
-(id)description;
-(unsigned char)type;
-(void)setType:(unsigned char)arg1 ;
-(void)stop;
-(void)start;
-(id)uuid;
-(double)duration;
-(void)setUuid:(id)arg1 ;
-(unsigned char)subtype;
-(NSDate *)startTime;
-(NSDate *)endTime;
-(void)setEndTime:(NSDate *)arg1 ;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)setSubtype:(unsigned char)arg1 ;
-(unsigned long long)signpostId;
-(void)setSignpostId:(unsigned long long)arg1 ;
-(id)initWithType:(unsigned char)arg1 subtype:(unsigned char)arg2 ;
@end

