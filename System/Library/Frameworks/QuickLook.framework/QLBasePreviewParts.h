/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLPreviewParts.h>

@interface QLBasePreviewParts : QLPreviewParts
+(BOOL)canConvertDocumentType:(id)arg1 ;
+(/*function pointer*/void*)dataCallbackForUTI:(id)arg1 andSize:(unsigned long long)arg2 ;
+(BOOL)isBundleURL:(id)arg1 ;
+(/*function pointer*/void*)urlCallbackForUTI:(id)arg1 ;
-(void)computePreview;
@end
