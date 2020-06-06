/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccountUI/VSAppDocumentController.h>
#import <libobjc.A.dylib/VSTwoFactorEntryViewModelDelegate.h>

@class NSMutableArray, NSString;

@interface VSTwoFactorEntryAppDocumentController : VSAppDocumentController <VSTwoFactorEntryViewModelDelegate> {

	NSMutableArray* _buttonElements;

}

@property (nonatomic,retain) NSMutableArray * buttonElements;              //@synthesize buttonElements=_buttonElements - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSMutableArray *)buttonElements;
-(void)setButtonElements:(NSMutableArray *)arg1 ;
-(void)_startObservingViewModel:(id)arg1 ;
-(void)_stopObservingViewModel:(id)arg1 ;
-(id)_newViewModel;
-(BOOL)_updateViewModel:(id)arg1 error:(id*)arg2 ;
-(BOOL)_updateTwoFactorEntryViewModel:(id)arg1 withTemplate:(id)arg2 error:(id*)arg3 ;
-(void)twoFactorEntryViewModel:(id)arg1 didPressButtonAtIndex:(unsigned long long)arg2 ;
@end

