/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Vision/Vision-Structs.h>
@interface VNCVPixelBufferConversionHelpers : NSObject
+(id)createDictionaryRepresentationOfCVPixelBuffer:(CVBufferRef)arg1 ;
+(CVBufferRef)createCVPixelBufferRefFromDictionaryRepresentation:(id)arg1 ;
+(BOOL)isCVPixelBuffer:(CVBufferRef)arg1 equalToCVPixelBuffer:(CVBufferRef)arg2 ;
+(unsigned long long)computeHashForCVPixelBuffer:(CVBufferRef)arg1 ;
@end

