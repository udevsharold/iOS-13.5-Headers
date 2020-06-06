/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesUI/ICLinkPresentationActivityItemSource.h>

@class ICAttachment;

@interface ICTableLinkPresentationActivityItemSource : ICLinkPresentationActivityItemSource {

	ICAttachment* _attachment;

}

@property (retain) ICAttachment * attachment;              //@synthesize attachment=_attachment - In the implementation block
-(id)init;
-(id)title;
-(ICAttachment *)attachment;
-(void)setAttachment:(ICAttachment *)arg1 ;
-(id)initWithAttachment:(id)arg1 ;
-(id)detail;
@end

