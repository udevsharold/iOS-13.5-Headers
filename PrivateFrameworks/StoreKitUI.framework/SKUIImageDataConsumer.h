/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreServices/SSVURLDataConsumer.h>

@interface SKUIImageDataConsumer : SSVURLDataConsumer

@property (getter=isImagePlaceholderAvailable,nonatomic,readonly) BOOL imagePlaceholderAvailable; 
-(id)objectForData:(id)arg1 response:(id)arg2 error:(id*)arg3 ;
-(id)imageForImage:(id)arg1 ;
-(BOOL)isImagePlaceholderAvailable;
-(id)imagePlaceholderForColor:(id)arg1 ;
-(id)imageForColor:(id)arg1 ;
-(id)imageForColor:(id)arg1 size:(CGSize)arg2 ;
@end

