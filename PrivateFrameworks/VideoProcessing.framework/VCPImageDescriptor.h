/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/VCPDistanceDescriptorProtocol.h>

@class VNImageprint;

@interface VCPImageDescriptor : NSObject <VCPDistanceDescriptorProtocol> {

	VNImageprint* _imagePrint;

}
+(BOOL)usePHAssetData;
+(int)preferredPixelFormat;
+(id)descriptorWithImage:(CVBufferRef)arg1 ;
+(id)descriptorWithData:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithImage:(CVBufferRef)arg1 ;
-(id)serialize;
-(int)computeDistance:(float*)arg1 toDescriptor:(id)arg2 ;
@end

