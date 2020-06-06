/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKFormRotatingAccessoryPopover.h>
#import <libobjc.A.dylib/WKFormControl.h>

@class WKContentView, NSString;

@interface WKDateTimePopover : WKFormRotatingAccessoryPopover <WKFormControl> {

	RetainPtr<WKDateTimePopoverViewController>* _viewController;
	WKContentView* _view;

}

@property (nonatomic,readonly) NSString * calendarType; 
-(id)viewController;
-(void)clear:(id)arg1 ;
-(id)controlView;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(id)initWithView:(id)arg1 datePickerMode:(long long)arg2 ;
-(NSString *)calendarType;
@end

