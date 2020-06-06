/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMetadataGroup.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class AVTimedMetadataGroupInternal, NSArray;

@interface AVTimedMetadataGroup : AVMetadataGroup <NSCopying, NSMutableCopying> {

	AVTimedMetadataGroupInternal* _priv;

}

@property (getter=_timedMetadataGroupInternal,nonatomic,readonly) AVTimedMetadataGroupInternal * timedMetadataGroupInternal; 
@property (nonatomic,readonly) SCD_Struct_AV8 timeRange; 
@property (nonatomic,copy,readonly) NSArray * items; 
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSArray *)items;
-(SCD_Struct_AV8)timeRange;
-(id)initWithItems:(id)arg1 timeRange:(SCD_Struct_AV8)arg2 ;
-(id)initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(opaqueCMSampleBufferRef)_createSerializedRepresentationWithFormatDescription:(opaqueCMFormatDescriptionRef)arg1 error:(id*)arg2 ;
-(const opaqueCMFormatDescriptionRef)copyFormatDescription;
-(id)_timedMetadataGroupInternal;
@end

