//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface EmoticonUploadInfoObj : NSObject
{
    _Bool _isUploadWxam;
    _Bool _addToTop;
    _Bool _isSelfie;
    NSString *_uploadImgMd5;
    NSString *_filePath;
    NSString *_attachedText;
    NSMutableArray *_attachedEmojiMd5List;
    NSString *_followMd5;
}

@property(nonatomic) _Bool isSelfie; // @synthesize isSelfie=_isSelfie;
@property(nonatomic) _Bool addToTop; // @synthesize addToTop=_addToTop;
@property(retain, nonatomic) NSString *followMd5; // @synthesize followMd5=_followMd5;
@property(retain, nonatomic) NSMutableArray *attachedEmojiMd5List; // @synthesize attachedEmojiMd5List=_attachedEmojiMd5List;
@property(retain, nonatomic) NSString *attachedText; // @synthesize attachedText=_attachedText;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(nonatomic) _Bool isUploadWxam; // @synthesize isUploadWxam=_isUploadWxam;
@property(retain, nonatomic) NSString *uploadImgMd5; // @synthesize uploadImgMd5=_uploadImgMd5;
- (void).cxx_destruct;
- (unsigned int)totalLenOfData;
- (id)bufferWithOffset:(unsigned int)arg1 maxLen:(unsigned int)arg2;
- (id)dataOfEmoticon;
- (_Bool)saveImgDataToTempPathWithImgData:(id)arg1;
@property(readonly, nonatomic) _Bool isUploadDirectly;

@end
