/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuickLook/QuickLook-Structs.h>
@interface QLItemDataThumbnailGenerator : NSObject {

	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)_executeCompletionHandlerWithImage:(id)arg1 ;
-(void)generateThumbnailWithData:(id)arg1 contentType:(id)arg2 size:(CGSize)arg3 scale:(double)arg4 completionBlock:(/*^block*/id)arg5 ;
@end

