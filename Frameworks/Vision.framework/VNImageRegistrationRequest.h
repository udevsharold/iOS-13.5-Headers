/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/VNTargetedImageRequest.h>

@class VNImageBuffer, VNImageRegistrationSignature;

@interface VNImageRegistrationRequest : VNTargetedImageRequest {

	VNImageBuffer* _cachedFloatingImageBuffer;
	VNImageRegistrationSignature* _cachedFloatingImageSignature;

}
+(BOOL)warmUpRequestPerformer:(id)arg1 error:(id*)arg2 ;
-(BOOL)warmUpRequestPerformer:(id)arg1 error:(id*)arg2 ;
-(BOOL)allowsCachingOfResults;
-(BOOL)internalPerformInContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)wantsSequencedRequestObservationsRecording;
-(id)cachedFloatingImageBufferReturningError:(id*)arg1 ;
-(id)cachedFloatingImageRegistrationSignatureReturningError:(id*)arg1 ;
-(BOOL)getReferenceImageBuffer:(id*)arg1 registrationSignature:(id*)arg2 forRequestPerformingContext:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
@end

