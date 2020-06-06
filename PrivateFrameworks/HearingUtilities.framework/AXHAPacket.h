/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HearingUtilities/HearingUtilities-Structs.h>
@class NSMutableData;

@interface AXHAPacket : NSObject {

	unsigned long long _totalLength;
	NSMutableData* _data;

}

@property (nonatomic,retain) NSMutableData * data;              //@synthesize data=_data - In the implementation block
+(id)packetDataWithPayload:(id)arg1 ;
+(SCD_Struct_AX1)headerFromData:(id)arg1 ;
+(id)packetWithHeader:(SCD_Struct_AX1)arg1 ;
-(void)dealloc;
-(NSMutableData *)data;
-(id)appendData:(id)arg1 ;
-(void)setData:(NSMutableData *)arg1 ;
-(id)initWithHeader:(SCD_Struct_AX1)arg1 ;
-(unsigned long long)missingLength;
-(id)dataPayload;
-(id)objectPayload;
@end

