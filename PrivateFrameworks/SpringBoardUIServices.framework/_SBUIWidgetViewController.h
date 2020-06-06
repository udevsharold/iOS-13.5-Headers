/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/_SBUIWidgetHost.h>

@protocol _SBUIWidgetHost;
@class NSString;

@interface _SBUIWidgetViewController : UIViewController <_SBUIWidgetHost> {

	NSString* _widgetIdentifier;
	id<_SBUIWidgetHost> _widgetHost;

}

@property (nonatomic,copy) NSString * widgetIdentifier;                          //@synthesize widgetIdentifier=_widgetIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<_SBUIWidgetHost> widgetHost;              //@synthesize widgetHost=_widgetHost - In the implementation block
@property (nonatomic,readonly) CGSize preferredViewSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)requestLaunchOfURL:(id)arg1 ;
-(void)invalidatePreferredViewSize;
-(id<_SBUIWidgetHost>)widgetHost;
-(CGSize)preferredViewSize;
-(void)hostWillPresent;
-(void)hostDidPresent;
-(void)hostWillDismiss;
-(void)hostDidDismiss;
-(void)setVisibleWidgetsIDs:(id)arg1 ;
-(NSString *)widgetIdentifier;
-(void)setWidgetIdentifier:(NSString *)arg1 ;
-(void)setWidgetHost:(id<_SBUIWidgetHost>)arg1 ;
@end

