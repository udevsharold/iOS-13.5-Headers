/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNMeCardSharingPickerViewControllerDelegate <NSObject>
@optional
-(void)sharingPicker:(id)arg1 didSelectSharingStatus:(unsigned long long)arg2;
-(void)sharingPickerDidCancel:(id)arg1;

@required
-(void)sharingPicker:(id)arg1 didChangeSharingState:(BOOL)arg2;
-(void)sharingPickerDidFinish:(id)arg1;
-(void)sharingPicker:(id)arg1 didSelectSharingAudience:(unsigned long long)arg2;
-(void)sharingPicker:(id)arg1 didSelectNameFormat:(unsigned long long)arg2;

@end

