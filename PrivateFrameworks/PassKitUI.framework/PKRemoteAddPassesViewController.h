/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/PKRemoteAddPassesViewControllerProtocol.h>

@protocol PKAddPassesViewControllerDelegate;
@class NSString;

@interface PKRemoteAddPassesViewController : _UIRemoteViewController <PKRemoteAddPassesViewControllerProtocol> {

	BOOL _finished;
	id<PKAddPassesViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKAddPassesViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(BOOL)shouldPropagateAppearanceCustomizations;
-(void)dealloc;
-(id<PKAddPassesViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PKAddPassesViewControllerDelegate>)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)ingestionDidFinishWithResult:(unsigned long long)arg1 ;
@end

