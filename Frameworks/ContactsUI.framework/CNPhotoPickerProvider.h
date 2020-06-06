/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol CNPhotoPickerProvider <NSObject>
@property (nonatomic,retain) NSString * identifier; 
@required
-(NSString *)identifier;
-(void)setIdentifier:(id)arg1;
-(id)initWithContact:(id)arg1;
-(id)loadItemsForSize:(CGSize)arg1 scale:(double)arg2 RTL:(BOOL)arg3 renderingQueue:(id)arg4 callbackQueue:(id)arg5 itemDelegate:(id)arg6;

@end

