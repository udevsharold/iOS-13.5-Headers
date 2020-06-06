/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/UIActivity.h>

@class ICNote, UIWindow;

@interface ICPasswordAddOrRemovePasswordActivity : UIActivity {

	/*^block*/id _completionHandler;
	/*^block*/id _willPerformActivityBlock;
	ICNote* _note;
	UIWindow* _displayWindow;

}

@property (nonatomic,copy) id completionHandler;                           //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) id willPerformActivityBlock;                    //@synthesize willPerformActivityBlock=_willPerformActivityBlock - In the implementation block
@property (nonatomic,retain) ICNote * note;                                //@synthesize note=_note - In the implementation block
@property (assign,nonatomic,__weak) UIWindow * displayWindow;              //@synthesize displayWindow=_displayWindow - In the implementation block
+(long long)activityCategory;
-(id)activityType;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(id)_systemImageName;
-(ICNote *)note;
-(void)setNote:(ICNote *)arg1 ;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(id)willPerformActivityBlock;
-(UIWindow *)displayWindow;
-(void)accessibilityAnnounceAddOrRemovePasswordWithIntent:(unsigned long long)arg1 withNote:(id)arg2 ;
-(id)initWithNote:(id)arg1 displayWindow:(id)arg2 willPerformActivityBlock:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setWillPerformActivityBlock:(id)arg1 ;
-(void)setDisplayWindow:(UIWindow *)arg1 ;
@end

