/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EDAnchor.h>

@interface EDTwoCellAnchor : EDAnchor {

	EDCellAnchorMarker mFrom;
	EDCellAnchorMarker mTo;
	BOOL mIsRelative;
	int mEditAs;

}
-(id)init;
-(EDCellAnchorMarker)to;
-(EDCellAnchorMarker)from;
-(void)setFrom:(EDCellAnchorMarker)arg1 ;
-(void)setTo:(EDCellAnchorMarker)arg1 ;
-(BOOL)isRelative;
-(void)setRelative:(BOOL)arg1 ;
-(int)editAs;
-(void)setEditAs:(int)arg1 ;
@end

