//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ActionKit/WFStorageServiceAction.h>

@interface WFGetFileAction : WFStorageServiceAction
{
}

- (id)targetDataInfo;
- (void)updateVisibleParameters;
- (void)selectedStorageServiceChanged;
- (BOOL)setParameterState:(id)arg1 forKey:(id)arg2;
- (BOOL)outputsMultipleItems;
- (BOOL)multipleSelectionEnabled;
- (id)filenamePlaceholderText;
- (id)showPickerKey;
- (id)filePathKey;
- (void)runAsynchronouslyWithInput:(id)arg1 storageService:(id)arg2;

@end

