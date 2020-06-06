/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CVAPortraitVideoPipeline <CVAVideoPipeline>
@required
-(int)renderWithRequest:(id)arg1 requestTo:(id)arg2 mixValue:(float)arg3 destinationColorPixelBuffer:(CVBufferRef)arg4 error:(id*)arg5 disparityPostprocessingCompletionHandler:(/*^block*/id)arg6 mattingCompletionHandler:(/*^block*/id)arg7 portraitCompletionHandler:(/*^block*/id)arg8;
-(int)renderWithRequest:(id)arg1 disparityPostprocessingCompletionHandler:(/*^block*/id)arg2 mattingCompletionHandler:(/*^block*/id)arg3 portraitCompletionHandler:(/*^block*/id)arg4;

@end

