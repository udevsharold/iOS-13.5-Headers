/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <RemoteUI/RemoteUITableViewCell.h>

@class UILabel;

@interface RemoteUITableViewSubtitleAndValueCell : RemoteUITableViewCell {

	UILabel* _valueLabel;

}
-(void)setBackgroundColor:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)valueLabel;
-(void)_adjustFrameOfView:(id)arg1 distance:(double)arg2 ;
-(id)effectiveDetailTextLabel;
-(id)effectiveValueTextLabel;
@end
