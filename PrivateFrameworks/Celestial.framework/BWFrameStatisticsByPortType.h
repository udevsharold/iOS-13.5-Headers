/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDictionary;

@interface BWFrameStatisticsByPortType : NSObject <NSFastEnumeration, NSSecureCoding> {

	NSArray* _portTypes;
	NSDictionary* _portTypeToFrameStatistics;
	SCD_Struct_BW49* _frameStatisticsStoragesForPortTypes;
	unsigned long long _frameCount;

}

@property (nonatomic,readonly) NSArray * portTypes; 
@property (nonatomic,readonly) unsigned long long frameCount; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_BW50*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)reset;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)frameCount;
-(NSArray *)portTypes;
-(id)initWithPortTypes:(id)arg1 ;
-(void)_setFrameCount:(unsigned long long)arg1 ;
-(void)updateWithFrameMetadata:(id)arg1 updateFocusDistance:(BOOL)arg2 ;
@end

